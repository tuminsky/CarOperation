#pragma once

#include "ui_selectiddialog.h"

#include <QDialog>
#include <QSqlQueryModel>


namespace Ui {
  class SelectIdDialog;
}

namespace carop
{

using id_t = unsigned int;

class SelectIdDialog : public QDialog
{
  Q_OBJECT

public:
  explicit SelectIdDialog(QWidget* parent = nullptr);

  id_t selected_id() const;

public slots:
  void show_table(const QString& table_name);

private slots:
  void confirm_click();

private:
  Ui::SelectIdDialog ui_;
  QSqlQueryModel model_;
  id_t selected_id_;
};

} // namespace carop