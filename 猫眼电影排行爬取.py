'''
Author: accowo
Version: default: V1.0
Date: 2021-10-17 12:50:45
LastEditTime: 2021-12-02 13:28:38
LastEditors: Please set LastEditors
brief: 猫眼电影排名爬取
Attention: something to notice
'''
import requests  
from requests.exceptions import RequestException
import re
import json
import time

#获得网页url源代码
def get_one_page(url):  
	try:
		headers = {'User-Agent': 'Mozilla/5.0 (Windows NT 10.0Win64x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/94.0.4606.81 Safari/537.36 Edg/94.0.992.47'
		}

		response = requests.get(url, headers=headers)  
		if response.status_code == 200:  
			return response.text
		return None
	except RequestException:
		return None
#正则表达式解析网页源码
def parse_one_page(html):
    pattern = re.compile('<dd>.*?board-index.*?>(.*?)</i>.*?data-src="(.*?)".*?name.*?a.*?>(.*?)</a>.*?star.*?>(.*?)</p>.*?releasetime.*?>(.*?)</p>.*?integer.*?>(.*?)</i>.*?fraction.*?>(.*?)</i>.*?</dd>',
                         re.S)
    items = re.findall(pattern, html)
    for item in items:
		# 返回字典类型
        yield {'index': item[0],
               'image': item[1],
               'title': item[2].strip(),
               'actor': item[3].strip()[3:] if len(item[3]) > 3 else '',
               'time': item[4].strip()[5:] if len(item[4]) > 5 else '',
               'score': item[5].strip() + item[6].strip()}
#将提取出的信息写入本地文件			
def write_to_file(content):
	with open("result.txt", "a", encoding="utf-8") as f:
		#json.dumps(content):将content转成str类型
		#print(type(json.dumps(content)))
		f.write(json.dumps(content, ensure_ascii=False)+"\n")

#主函数
def main(offset):  
	url = 'https://maoyan.com/board/4?offset='+str(offset)
	#获得网页url源代码
	html = get_one_page(url)
	#print(html)
	#正则表达式解析网页源码并将解析结果写入文件
	for rank in parse_one_page(html):
		write_to_file(rank)
	print('猫眼电影排名前'+str(offset+10)+'写入文件成功!')

if __name__ == '__main__':
	#增加偏移量获取TOP100排名
	for i in range(10):
		main(offset=i * 10)
		time.sleep(1)