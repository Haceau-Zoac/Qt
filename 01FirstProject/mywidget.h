#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>  //包含有文件 QWidget 窗口类

class myWidget : public QWidget
{
    Q_OBJECT // Q_OBJECT宏，允许类中使用信号和槽的机智

public:
    myWidget(QWidget *parent = nullptr);//构造函数
    ~myWidget();
};
#endif // MYWIDGET_H
