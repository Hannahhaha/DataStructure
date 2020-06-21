
//クラスを使う

//Studentクラス宣言
class Student {
	public int id;       //フィールド宣言
	public String name;
	
	public int getId(){  //メソッド宣言
		return id;
	}
	
	public String getName(){
		return name;
	}
}

//ClassEx1クラス宣言
public class ClassEx1 {
        //mainメソッド(プログラムの開始点)
	public static void main(String[] args){ 
		Student taro = new Student();
		Student hanako = new Student();
		
		taro.id = 20201001;
		taro.name = "太郎";
		hanako.id = 20201002;
		hanako.name = "花子";

		System.out.println(taro.id + " " +  taro.name);
		System.out.println(hanako.id + " " +  hanako.name);
	}
}

