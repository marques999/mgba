/* Copyright (c) 2013-2015 Jeffrey Pfau
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "MemoryView.h"

#include "GameController.h"

using namespace QGBA;

MemoryView::MemoryView(GameController* controller, QWidget* parent)
	: QWidget(parent)
	, m_controller(controller)
{
	m_ui.setupUi(this);

	m_ui.hexfield->setController(controller);
	connect(controller, SIGNAL(gameStopped(GBAThread*)), this, SLOT(close()));
}