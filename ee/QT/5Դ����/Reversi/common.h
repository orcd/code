#ifndef COMMON_H
#define COMMON_H

#include <QWidget>
#include <QDebug>
#define cout qDebug() << "[ " << __FILE__ << ":"  << __LINE__ << " ] " //没有分号

void moveToCenter(QWidget *tmp); //窗口在屏幕中央显示

// 枚举类型
// 棋子状态，Empty标志为空，Black标志为黑子，White标志为白子
enum GridState{Empty, Black, White};

//对战模式，Machine为人机对战，Network为网络对战
enum PlayMode{Machine, Network};

// 吃子的规则
// 吃子规则的参数：棋盘数组坐标位置(x y)、横着或竖着的格数(gridNum)、
// 棋子状态(chess)、棋子角色(currentRole)
// eatChess默认为true，代表改变原来的数组， false不改变数组内容
// 返回值：吃子个数
int judgeRule(int x, int y, int gridNum , void *chess, GridState currentRole,bool eatChess=true);

#endif // COMMON_H

