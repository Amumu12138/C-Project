#include<iostream>
using namespace std;

#include"Example01_bytes.h"
int main()
{
	cout << "Hello, This is Project_12_22 Examples" << endl;

	//int x = 12345;		//十六进制表示：0x00003039
	//show_int(x);			//0x39  0x30  0x00  0x00  小端机器(反序输出)
	//show_float(float(x));	//0x00  0xe4  0x40  0x46
	//show_pointer(&x);		//0x50  0xf9  0x5f  0x00  值不确定，二级地址

	//float a[3] = { 1.0, 2.0, 3.0 };
	//sum_elements(a, 0);			//程序中断，报错

	//前置和
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

	//完成指针值交换
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
	//文件 编辑 视图 项目 生成 调试 团队 工具 测试 分析 窗口  帮助
	//文件 编辑 视图 项目 生成 调试 团队 工具 测试 分析 窗口 帮助
	// 文件 编辑 视图 项目 生成 调试 团队 工具 测试 分析 窗口 帮助
	//文件 编辑 视图 项目 生成 调试 团队 工具 测试 分析 窗口 帮助
	//1，包名格式要求: com.公司名,游戏名,vivominigame
	//2，小游戏是否接内购，请在对接组内告知
	//3，小游戏的icon不超过100k,包体不超过4M
	//4，记得签名要做好妥善保存，以后更细都不能变更签名，每次更新版本时版本名称和版本号都要升级
	//5，支付和账号的对接，账号和支付各自有不同的aqqsecret的，要各自使用，不能混用
	//6，游戏包审核时间;1-2个工作日
	//7，所有接广告的请务必发邮件到gaomengzhen@vivo.com(否则无法调试) 邮件标题;小游戏广告申请+游戏名称
	//邮件内容: a,游戏名称 b,游戏包名 c,广告类型(bannner广告、插屏广告和激励视频) e，广告弹出逻辑及位置
	//8，提交审核建议写最新的全量版本，在src/manifest.json文件minPlatformVersion字段配置，审核时，会按照这个最低版本引擎去审核，
	//这个字段的具体含义，全量版本的更新日志
	//9，屏幕保持常量

	//文件 编辑 视图 生成 调试 团队 工具 测试 分析 窗口 帮助
	//wenjian bianji shitu tiaoshi tuandui gongju ceshi fenxi chuangkou bangzhu
	//abcdefg hjklomn opq rts uvwxyz
	//文件 编辑 视图 生成 调试 团队 工具 测试 分析 窗口 帮助
	//abcdefg hjklomn opqrts uvwxyz
	//解决方案 项目 
	//大风歌
	//大风起兮云飞扬
	//威加海内兮归故乡
	//安得猛士兮守四方

	//文件 编辑 视图 项目 生成 调试 团队 工具 测试 分析 窗口 帮助
	//力拔山兮气盖世
	//时不利兮骓不逝
	//骓不逝兮可奈何
	//虞兮虞兮奈若何

	//文件 编辑 视图 项目 生成 调试 团队 工具 测试 分析 窗口 帮助 
	//文件名 编辑 视图 项目 生成 调试 团队 工具 测试 分析 窗口 帮助

	//文件  编辑 视图 项目 生成 调试 团队 工具 测试 分析 窗口 帮助
	//力拔山兮气盖世
	//时不利兮骓不逝
	//骓不逝兮可奈何
	//虞兮虞兮奈若何

	//大风起兮云飞扬
	//威加海内兮归故乡
	//安得猛士兮守四方

	//项目 编辑 视图 项目 生成 调试 团队 工具 测试 分析 窗口 帮助
	//项目 编辑 视图 项目 生成 调试 团队 工具 测试 分析 窗口 帮助
	//文件 编辑 视图 项目 生成 调试 团队 工具 测试 分析 窗口 帮助 
	//文件 编辑 视图 项目 生成 调试 团队 工具 测试 分析 窗口 帮助 
	//abcdefg hijkl mnopq rts uvwxyz
	
	//Sprite 动画 骨骼动画 混合模式 区块地图 滤镜 粒子 音频 文本
	//UI jishiqi huandong shubiaojiaohu jiazai pingmushipei shurushebei 
	//wangluohegeshi DOMyuansu tiaoshi xingnengceshi qitayinqingdeDemo ide

	//Sprite donghua gugedonghua hunhemoshi qukuaiditu lizi yinpin wenben
	//sprite donghua gugedonghua hunhemoshi qukuaiditu lizi yinpin wenben
	//sprite donghua gugedonghua hunhemoshi qukuaiditu lizi yinpin wenben
	//sprite donghua gugedonghua hunhemoshi qukuaiditu lizi yinpin wenben
	
	//label button radiogroup checkbox clip colorpicker combobox dialog 
	//label button radiogroup checkbox clip colorpicker combobox dialog
	
	//文件 编辑 视图 项目 生成 调试 团队 工具 测试 分析 窗口 帮助
	//文件 文件 文件 文件 文件 文件 文件 文件 文件 文件
	//视图 视图 视图 视图 视图 视图 视图 视图 视图 视图
	//编辑 编辑 编辑 编辑 编辑 编辑 编辑 编辑 编辑 编辑
	//xiangmu xiangmu xiangmu xiangmu .-

	//文件 编辑 视图 项目 生成 调试 团队 工具 测试 分析 窗口 帮助 
	//文件 编辑 视图 项目生成  调试 团队 工具 测试 分析 窗口 帮助
	//王者广东麻将  爱恨交加 小仙女 莫失莫忘  仙剑奇侠传 
	//label image button zhoujingjun Laya cocoscreator
	
	//resource scene label image button list array var let 
	//if else switch while for chengzhang 
	//摄像机 光照 3d精灵 mesh网格 材质 纹理 动画 物理系统 鼠标交互
	//脚本 天空 粒子系统 拖尾系统 自定义shader 性能测试 高级案例

	//程序关键字
	//auto break case char const continue default do
	//double else enum extern float for goto if 
	//int long register return short signed sizeof static 
	//struct switch typedef union unsigned void volatile white

	//文件 编辑 视图 项目 生成 调试 团队 工具 测试 分析 窗口 帮助
	//摄像机 光照 3d精灵 mesh网格 材质 纹理 动画 物理系统 鼠标交互 
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
	//文件 编辑 视图 项目 生成 
	//帮助 窗口 分析 测试 工具
	//调试 团队 工具  测试 分析
	//文件 编辑 视图 项目 生成 
	//帮助 窗口 分析 测试 工具 
	//调试 团队 工具 测试 分析
	//文件 编辑 视图 生成 调试 
	//团队 工具 测试 分析 窗口
	//帮助 头文件 资源文件 外部依赖项
	//王者广东麻将 欢乐弹珠 鱼腹
	//文件 编辑 视图 项目 生成
	//调试 团队 工具 测试 分析
	//窗口 帮助 Laya Label image button 

	
}