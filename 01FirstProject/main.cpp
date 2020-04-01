#include "mywidget.h"
#include <QApplication> // 包含一个应用程序类的头文件

//main程序入口  argc命令行变量的数量    argv命令行变量的数组
int main(int argc, char *argv[])
{
    //a应用程序对象，在Qt中，应用程序对象，有且只有一个
    QApplication a(argc, argv);
    //窗口对象  myWidget父类 -> QWidget
    myWidget w;
    //窗口对象 默认不会显示，必须要调用show方法
    w.show();

    //让应用程序对象进入消息循环
    //当代码阻塞到这行
    return a.exec();

/*
    while (true)
    {
        if(点击叉子)
        {
            break;
        }
    }
}
*/

}

/*
    1.  Qt简介
        1.1  跨平台图形界面引擎
        1.2  历史
            1.2.1  1991 奇趣科技
        1.3  优点
            1.3.1  跨平台
            1.3.2  接口简单，容易上手
            1.3.3  一定程度上简化了内存回收
        1.4  版本
            1.4.1  商业版
            1.4.2  开源版
        1.5  成功案例
            1.5.1  Linux桌面环境 KDE
            1.5.2  谷歌地图
            1.5.3  VLC多媒体播放器
                   ...

    2.  创建第一个Qt程序
        2.1  点击创建项目后，选择项目路径以及 给项目起名称
             名称 - 不能有中文 不能有空格
             路径 - 不能有中文路径
        2.2  默认创建有窗口类，myWidget，基类有三种选择：
             QWidget
             QMainWindow
             QDialog
        2.3  main函数
            2.3.1  QApplication a   应用程序对象，有且只有一个
            2.3.2  myWidget w       实例化窗口对象
            2.3.3  w.show()         调用show函数 显示窗口
            2.3.4  return a.exec()  让应用程序对象进入消息循环机制中，代码阻塞到当前行
*/
