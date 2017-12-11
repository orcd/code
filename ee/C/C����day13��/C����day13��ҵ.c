1. 将以下结构体类型变量，以二进制的形式存放到文件中，并且可以实现读的接口，打印读出来信息。
	typedef struct Student 
	{
		char *name;		//名字
		int id;
		int name_len;	//名字长度
	}Stu;
	
	Stu s;	//定义结构体变量
	//结构体成员赋值
	s.id = 1;
	s.name_len = strlen("mike"); //名字长度
	s.name = (char *)malloc(s.name_len + 1);
	strcpy(s.name, "mike");
