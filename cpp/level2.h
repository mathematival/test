
#ifndef LEVEL2_H
#define LEVEL2_H

#include <QWidget>
#include<QPainter>
#include<QDebug>
#include<QString>
#include<QTimer>
#include<QKeyEvent>
#include<QDialog>
#include"mary.h"
#include"brick.h"
#include"unknown.h"
#include"mushroom.h"
#include"master.h"
#include"pipe.h"
#include"gamepause.h"
#include<mypushbutton.h>
#include"fire.h"
#include"castle.h"
#include"bullet.h"
#include"flower.h"

class level2 : public QWidget {
    Q_OBJECT

public:
    explicit level2(QWidget *parent = nullptr);
    int timer1;
    int timer2;
    int timer3;
    bool is_kill_timer2;
    bool game_start;
    double time;
    int score;
    bool is_press_x;
    bool is_win;
    QString key;
    Mary *mary;
    Brick *brick;
    Flower *flower;
    Pipe *pipe;
    Unknown *unknown;
    MushRoom *mushroom;
    GamePause *Pause;
    Master *master;
    Bullet *bullet;
    Fire *fire;
    Castle *castle;

    void paintEvent(QPaintEvent *);//绘图事件
    void keyPressEvent(QKeyEvent *event);//键盘按下
    void keyReleaseEvent(QKeyEvent *event);//键盘抬起
    void timerEvent(QTimerEvent *event);//定时器
    void Game_Init();

    void Die_Init();

    void Pause_Init();

    void Pause_Game_Init();

    void Fall_Down(int &y);

    void Jump_Collision();//角色跳跃碰撞检测
    void Move_Collision();//移动碰撞检测
    void Game_Win();
    void Game_Over();
signals:
    void back();
private:

};

#endif // LEVEL2_H