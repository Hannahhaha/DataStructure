
//�N���X���g��

//Student�N���X�錾
class Student {
	public int id;       //�t�B�[���h�錾
	public String name;
	
	public int getId(){  //���\�b�h�錾
		return id;
	}
	
	public String getName(){
		return name;
	}
}

//ClassEx1�N���X�錾
public class ClassEx1 {
        //main���\�b�h(�v���O�����̊J�n�_)
	public static void main(String[] args){ 
		Student taro = new Student();
		Student hanako = new Student();
		
		taro.id = 20201001;
		taro.name = "���Y";
		hanako.id = 20201002;
		hanako.name = "�Ԏq";

		System.out.println(taro.id + " " +  taro.name);
		System.out.println(hanako.id + " " +  hanako.name);
	}
}

