#include "animationwidget.h"
#include "ui_animationwidget.h"

AnimationWidget::AnimationWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AnimationWidget)
{
    ui->setupUi(this);
}

AnimationWidget::~AnimationWidget()
{
    delete ui;
}

void AnimationWidget::on_AnimationWidget_customContextMenuRequested(const QPoint &pos)
{

}
