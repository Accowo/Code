package cn.mldn.Student;
public class Student{
	private int age;
	private String name;
	public Student(){
		this.age = 18;
		this.name = "xihua";
	}	
	public String GetInfo(){
		return "年龄"+this.age+"姓名"+this.name;
	}
}
