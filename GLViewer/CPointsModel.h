#pragma once
#include <QAbstractTableModel>
#include "CPosition.h"

class CPointsModel : public QAbstractTableModel
{
private:
	QList<CPosition> m_table;

public:
	CPointsModel();
	virtual ~CPointsModel();

	// Inherited via QAbstractTableModel
	virtual Q_INVOKABLE int rowCount(const QModelIndex & parent) const override;
	virtual Q_INVOKABLE int columnCount(const QModelIndex & parent) const override;
	virtual Q_INVOKABLE QVariant data(const QModelIndex & index, int role) const override;

	QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;
	bool insertRow(double stationing, double easting, double northing);
};

