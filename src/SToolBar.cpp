#include "..\includes\SToolBar.h"
#include "..\includes\Actions.h"
#include "..\includes\SMainWindow.h"

SToolBar::SToolBar(const QString& toolBarName, SMainWindow* parent) :
	QToolBar(toolBarName),
	m_parents(parent),
	m_actions(parent->getActions())
{
	addAction(m_actions->back);
}


SToolBar::~SToolBar()
{
}
