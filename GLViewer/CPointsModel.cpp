#include "CPointsModel.h"



CPointsModel::CPointsModel()
{
}


CPointsModel::~CPointsModel()
{
}

Q_INVOKABLE int CPointsModel::rowCount(const QModelIndex & parent = QModelIndex()) const
{
	return m_table.count();
}

Q_INVOKABLE int CPointsModel::columnCount(const QModelIndex & parent = QModelIndex()) const
{
	return 3;
}

Q_INVOKABLE QVariant CPointsModel::data(const QModelIndex & index, int role = Qt::DisplayRole) const
{
	QVariant ret;
	if (!index.isValid())
		ret = QVariant();

	if (index.row() >= m_table.size() || index.row() < 0)
		ret = QVariant();

	if (role == Qt::DisplayRole) {
		CPosition pos = m_table.at(index.row());

		if (index.column() == 0)
			ret = pos.stationing;
		else if (index.column() == 1)
			ret = pos.easting;
		else if (index.column() == 2)
			ret = pos.northing;
	}
	return ret;
}

QVariant CPointsModel::headerData(int section, Qt::Orientation orientation, int role) const
{
	if (role != Qt::DisplayRole)
		return QVariant();

	if (orientation == Qt::Horizontal) {
		switch (section) {
		case 0:
			return tr("Stationing");

		case 1:
			return tr("Easting");

		case 2:
			return tr("Northing");

		default:
			return QVariant();
		}
	}
	return QVariant();
}

bool CPointsModel::insertRow(double stationing, double easting, double northing)
{
	CPosition pos;

	pos.stationing = stationing;
	pos.easting = easting;
	pos.northing = northing;
	m_table.push_back(pos);

	return true;
}
