#include "selectwin.h"
#include "ui_selectwin.h"

SelectWin::SelectWin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SelectWin)
{
    ui->setupUi(this);
    model = new QSqlTableModel();

}

SelectWin::~SelectWin()
{
    delete ui;
}

void SelectWin::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked())
    {
        model->setTable("employee"); //设置员工表格
    }
    if(ui->radioButton_2->isChecked())
    {
        model->setTable("attendance"); //设置员工表格
    }

   //设置过滤器
    //model->setFilter("");
    //查询
    model->select();

    ui->tableView->setModel(model);
}
