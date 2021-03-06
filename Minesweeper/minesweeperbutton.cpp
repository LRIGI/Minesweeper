/**
 * MineSweeperButton
 * Implements QPushButton and adds functionality for right clicking
 * @author Stephen Liang
 * @author Aisha Halim
 * Created for CS 340 Fall 2010 - Professor Troy
 */
#include "minesweeperbutton.h"
#include <QMouseEvent>
#include <QDebug>

MineSweeperButton::MineSweeperButton(QWidget *parent) : QPushButton(parent)
{
}

MineSweeperButton::MineSweeperButton(QString blah) : QPushButton(blah)
{

}

/**
  * mousePressEvent(QMouseEvent*)
  * Overrides the mousePressEvent of the QPushButton to enable right clicking
  */
void MineSweeperButton::mousePressEvent(QMouseEvent *qMEvent)
{
    //Did we right click?
    if ( qMEvent->button() == Qt::RightButton )
    {
 //       emit rightButtonClicked();
    }

    //Do default behavior otherwise
    QPushButton::mousePressEvent(qMEvent);
}
