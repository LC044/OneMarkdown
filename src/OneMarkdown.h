#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
// #include <QWeb
// #include <QWebChannel>
// #include <QtWebEngineWidgets/QWebEngineView>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWebEngine/QtWebEngine>
#include <QLabel>
#include <QFileDialog>
#include "global.h"
#include <memory>
#include <string>
#include <iostream>
#include "maddy/parser.h"
#include <QDebug>
#include <QTimer>
#include "common.h"
#pragma execution_character_set("utf-8")
QT_BEGIN_NAMESPACE

namespace Ui
{
    class OneMarkdown;
}
QT_END_NAMESPACE
// QWebEngineView *webView = nullptr;
// QWebChannel *webChannel = nullptr;
class OneMarkdown : public QMainWindow
{
    Q_OBJECT

public:
    OneMarkdown(QWidget *parent = nullptr);
    ~OneMarkdown();

private slots:
    void on_textEdit_textChanged();

    void on_textEdit_selectionChanged();

    void on_textEdit_textEdited();

    void textEdit_textChanged();

    void time_update();

    void on_action_new_file_triggered();

    void on_action_open_file_triggered();

    void on_splitter_splitterMoved(int pos, int index);

    void on_btn_hide_show_sideBar_clicked();

private:
    int WORD_NUM = 0;
    int CHAR_NUM = 0;
    int LINE_NUM = 0;
    bool isSideClosed = false;
    QList<int> SidePos={10000,40000};
    int size = 0;
    int counter = 0;
    int start = 0;
    int end = 0;
    Ui::OneMarkdown *ui;
    QLabel *statusLabel;
    bool isShowSideBar = true;
    void initUi();
    void InitTreeView();
    int countWords();
    int countChars();
    int countLines();
};
#endif // MAINWINDOW_H
