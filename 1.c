//#include<stdio.h>
////int main()
//{
//	printf("(are you ok\?\?\n");             //如果为"??)",则会形成三字母词效果会使“）”变为“]”，问号也被改变了意思，此时\?的转义字符的意义就是防止被解析成三字母词
//	return 0;
//}






#include <stdio.h>
//int main()
//{
//	printf("%c\n", '\'');                    //突发奇想倘若为''',此时无法识别
//		return 0;
//}
//int main()
//{
//	printf("%s\n", "\"");                   //但当想输出一个特殊字符时，转义字符派上用场了只需在容易误解的字符前加一个\,如改行所示，同理上文的’也可以用同样的方法表示
//	return 0;
//}









//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));           //前景回顾，strlen是可以计算字符长度的。
//		return 0;                                         //此时字符长度为13，\与后面紧挨着的字符算一个字符，\32在计算机中为8进制，需要先转化为10进制的数，为26，再在ASCII码中找到对应的符号为有方向箭头，如下文
//}
//int main()
//{
//	printf("%d\n", strlen("\32"));                        //运行此代码最终显示字符长度为1，上文正确    
//		return 0;
//}
//int main()
//{
//	printf("\132");                                      //转化为10进制后是90，此时则为ASCII码的Z字符，也就是一个字符长度
//	return 0;
//}

       





//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	while (line < 20000)
//	{
//		printf("敲一行代码：%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//		printf("好offer\n");
//	return 0;
//}










//
//int Add(int x,int y)//“Add”为自定义函数，同时还有一种类别叫做库函数
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = Add(num1, num2);//sum=num1+num2;前者为相加的函数形式，后者为一般的指令
//	sum = Add(a, b);//sum=num1+num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}





//数组
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };// 定义一个存放10个整数数字的数组
//	printf("%d\n", arr[4]);                //在上述数组中，是以顺序来编码的，而顺序中第一位是0，而不是1，因此在这一行中打出的次序为4的字符实际上是上行中的"5"
//	return 0;
//}



//
//int main()
//{
//	printf("%d/n", strlen("xld是nt"));
//		return 0;
//}



int main()
{printf}







