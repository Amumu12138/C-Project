#include<iostream>
using namespace std;

#include"Example01_bytes.h"
int main()
{
	cout << "Hello, This is Project_12_22 Examples" << endl;

	//int x = 12345;		//ʮ�����Ʊ�ʾ��0x00003039
	//show_int(x);			//0x39  0x30  0x00  0x00  С�˻���(�������)
	//show_float(float(x));	//0x00  0xe4  0x40  0x46
	//show_pointer(&x);		//0x50  0xf9  0x5f  0x00  ֵ��ȷ����������ַ

	//float a[3] = { 1.0, 2.0, 3.0 };
	//sum_elements(a, 0);			//�����жϣ�����

	//ǰ�ú�
	/*float a[5] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	float p[5] = { 0.0, 0.0, 0.0, 0.0, 0.0 };
	psum1(a, p, 5);
	cout <<"a = "<< a  <<"p = " << p <<" *p = "<< *p<< endl;
	for (int i = 0; i < 5; i++){
		cout << "i1 = " << i << " *p1 = " << p[i] << endl;
	}
	psum2(a, p, 5);
	cout << "a = " << a << "p2 = " << p << " *p2 = " << *p << endl;
	for (int i = 0; i < 5; i++){
		cout << "i2 = " << i << " *p2 = " << p[i] << endl;
	}*/

	//���ָ��ֵ����
	/*int a = 4;
	int b = exchange_test(&a, 3);
	printf("&a = 0x%x, &b = 0x%x \n", &a, &b);
	printf("a = %d, b = %d\n", a, b);
	*/

	cout << " HELLO WORLD" << endl;
	return 0;

	//qwert yuiop
	//asdfg hjkl;
	//zxcvb nm,./

	//abcde fg hijkl
	//mnopq srt uvwxyz

	//abcdefghijkl mnopq srtuvwyz
	//adcdefghijkl mnopq srtuvwxyz
	//�ļ� �༭ ��ͼ ��Ŀ ���� ���� �Ŷ� ���� ���� ���� ����  ����
	//�ļ� �༭ ��ͼ ��Ŀ ���� ���� �Ŷ� ���� ���� ���� ���� ����
	// �ļ� �༭ ��ͼ ��Ŀ ���� ���� �Ŷ� ���� ���� ���� ���� ����
	//�ļ� �༭ ��ͼ ��Ŀ ���� ���� �Ŷ� ���� ���� ���� ���� ����
	//1��������ʽҪ��: com.��˾��,��Ϸ��,vivominigame
	//2��С��Ϸ�Ƿ���ڹ������ڶԽ����ڸ�֪
	//3��С��Ϸ��icon������100k,���岻����4M
	//4���ǵ�ǩ��Ҫ�������Ʊ��棬�Ժ��ϸ�����ܱ��ǩ����ÿ�θ��°汾ʱ�汾���ƺͰ汾�Ŷ�Ҫ����
	//5��֧�����˺ŵĶԽӣ��˺ź�֧�������в�ͬ��aqqsecret�ģ�Ҫ����ʹ�ã����ܻ���
	//6����Ϸ�����ʱ��;1-2��������
	//7�����нӹ�������ط��ʼ���gaomengzhen@vivo.com(�����޷�����) �ʼ�����;С��Ϸ�������+��Ϸ����
	//�ʼ�����: a,��Ϸ���� b,��Ϸ���� c,�������(bannner��桢�������ͼ�����Ƶ) e����浯���߼���λ��
	//8���ύ��˽���д���µ�ȫ���汾����src/manifest.json�ļ�minPlatformVersion�ֶ����ã����ʱ���ᰴ�������Ͱ汾����ȥ��ˣ�
	//����ֶεľ��庬�壬ȫ���汾�ĸ�����־
	//9����Ļ���ֳ���

	//�ļ� �༭ ��ͼ ���� ���� �Ŷ� ���� ���� ���� ���� ����
	//wenjian bianji shitu tiaoshi tuandui gongju ceshi fenxi chuangkou bangzhu
	//abcdefg hjklomn opq rts uvwxyz
	//�ļ� �༭ ��ͼ ���� ���� �Ŷ� ���� ���� ���� ���� ����
	//abcdefg hjklomn opqrts uvwxyz
	//������� ��Ŀ 
	//����
	//��������Ʒ���
	//���Ӻ���������
	//������ʿ�����ķ�

	//�ļ� �༭ ��ͼ ��Ŀ ���� ���� �Ŷ� ���� ���� ���� ���� ����
	//����ɽ��������
	//ʱ����������
	//��������κ�
	//��������������

	//�ļ� �༭ ��ͼ ��Ŀ ���� ���� �Ŷ� ���� ���� ���� ���� ���� 
	//�ļ��� �༭ ��ͼ ��Ŀ ���� ���� �Ŷ� ���� ���� ���� ���� ����

	//�ļ�  �༭ ��ͼ ��Ŀ ���� ���� �Ŷ� ���� ���� ���� ���� ����
	//����ɽ��������
	//ʱ����������
	//��������κ�
	//��������������

	//��������Ʒ���
	//���Ӻ���������
	//������ʿ�����ķ�

	//��Ŀ �༭ ��ͼ ��Ŀ ���� ���� �Ŷ� ���� ���� ���� ���� ����
	//��Ŀ �༭ ��ͼ ��Ŀ ���� ���� �Ŷ� ���� ���� ���� ���� ����
	//�ļ� �༭ ��ͼ ��Ŀ ���� ���� �Ŷ� ���� ���� ���� ���� ���� 
	//�ļ� �༭ ��ͼ ��Ŀ ���� ���� �Ŷ� ���� ���� ���� ���� ���� 
	//abcdefg hijkl mnopq rts uvwxyz
	
	//Sprite ���� �������� ���ģʽ �����ͼ �˾� ���� ��Ƶ �ı�
	//UI jishiqi huandong shubiaojiaohu jiazai pingmushipei shurushebei 
	//wangluohegeshi DOMyuansu tiaoshi xingnengceshi qitayinqingdeDemo ide

	//Sprite donghua gugedonghua hunhemoshi qukuaiditu lizi yinpin wenben
	//sprite donghua gugedonghua hunhemoshi qukuaiditu lizi yinpin wenben
	//sprite donghua gugedonghua hunhemoshi qukuaiditu lizi yinpin wenben
	//sprite donghua gugedonghua hunhemoshi qukuaiditu lizi yinpin wenben
	
	//label button radiogroup checkbox clip colorpicker combobox dialog 
	//label button radiogroup checkbox clip colorpicker combobox dialog
	
	//�ļ� �༭ ��ͼ ��Ŀ ���� ���� �Ŷ� ���� ���� ���� ���� ����
	//�ļ� �ļ� �ļ� �ļ� �ļ� �ļ� �ļ� �ļ� �ļ� �ļ�
	//��ͼ ��ͼ ��ͼ ��ͼ ��ͼ ��ͼ ��ͼ ��ͼ ��ͼ ��ͼ
	//�༭ �༭ �༭ �༭ �༭ �༭ �༭ �༭ �༭ �༭
	//xiangmu xiangmu xiangmu xiangmu .-

	//�ļ� �༭ ��ͼ ��Ŀ ���� ���� �Ŷ� ���� ���� ���� ���� ���� 
	//�ļ� �༭ ��ͼ ��Ŀ����  ���� �Ŷ� ���� ���� ���� ���� ����
	//���߹㶫�齫  ���޽��� С��Ů ĪʧĪ��  �ɽ������� 
	//label image button zhoujingjun Laya cocoscreator
	
	//resource scene label image button list array var let 
	//if else switch while for chengzhang 
	//����� ���� 3d���� mesh���� ���� ���� ���� ����ϵͳ ��꽻��
	//�ű� ��� ����ϵͳ ��βϵͳ �Զ���shader ���ܲ��� �߼�����

	//����ؼ���
	//auto break case char const continue default do
	//double else enum extern float for goto if 
	//int long register return short signed sizeof static 
	//struct switch typedef union unsigned void volatile white

	//�ļ� �༭ ��ͼ ��Ŀ ���� ���� �Ŷ� ���� ���� ���� ���� ����
	//����� ���� 3d���� mesh���� ���� ���� ���� ����ϵͳ ��꽻�� 
	//abcdef ghijklmn opqrts uvwxyz
	//abcdef ghijklmn opqrts uvwxyz
	//abcdef ghijklmn opqrts uvwxyz
	//abcdefghijklmnopqrtsuvwxyz
	//wenjian bianji shitu xiangmu shengcheng tiaoshi tuandui gongju ceshi fenxi chuangkou bangzhu
	//bangzhu chuangkou fenxi ceshi gongju 
	//wenjian bianji shitu xiangmu shengcheng 
	//tiaoshi tuandui gongju ceshi fenxi
	//gongju ceshi fenxi chuangkou bangzhu
	//shexiangji guangzhao 3djingling meshwangge caizhi
	//wenli donghua wulixitong shubiaojiaohu

	//wenjian bianji shitu xiangmu shengcheng tiaoshi tuandui gongju ceshi fenxi 
	//wenjian bianji shitu xiangmu shengcheng tiaoshi tuandui gongju ceshi fenxi
	//wenjian bianji shitu xiangmu shengcheng
	//tiaoshi tuandui gongju ceshi fenxi
	//wenjian bianji1 shitu xiangmu shengcheng tiaoshi tuandui 
	//tuandui tuan yu yuyrysyusu yu pi pipi piqi yufu yufu
	//�ļ� �༭ ��ͼ ��Ŀ ���� 
	//���� ���� ���� ���� ����
	//���� �Ŷ� ����  ���� ����
	//�ļ� �༭ ��ͼ ��Ŀ ���� 
	//���� ���� ���� ���� ���� 
	//���� �Ŷ� ���� ���� ����
	//�ļ� �༭ ��ͼ ���� ���� 
	//�Ŷ� ���� ���� ���� ����
	//���� ͷ�ļ� ��Դ�ļ� �ⲿ������
	//���߹㶫�齫 ���ֵ��� �㸹
	//�ļ� �༭ ��ͼ ��Ŀ ����
	//���� �Ŷ� ���� ���� ����
	//���� ���� Laya Label image button 

	
}