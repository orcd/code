1. �����½ṹ�����ͱ������Զ����Ƶ���ʽ��ŵ��ļ��У����ҿ���ʵ�ֶ��Ľӿڣ���ӡ��������Ϣ��
	typedef struct Student 
	{
		char *name;		//����
		int id;
		int name_len;	//���ֳ���
	}Stu;
	
	Stu s;	//����ṹ�����
	//�ṹ���Ա��ֵ
	s.id = 1;
	s.name_len = strlen("mike"); //���ֳ���
	s.name = (char *)malloc(s.name_len + 1);
	strcpy(s.name, "mike");
