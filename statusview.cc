/*
    This file is part of Icecream.

    Copyright (c) 2003 Frerich Raabe <raabe@kde.org>
    Copyright (c) 2003,2004 Stephan Kulow <coolo@kde.org>
    Copyright (c) 2003,2004 Cornelius Schumacher <schumacher@kde.org>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#include "statusview.h"

#include "hostinfo.h"

#include <klocale.h>
#include <kdebug.h>

StatusView::StatusView( HostInfoManager *m )
  : mHostInfoManager( m )
{
}

StatusView::~StatusView()
{
}

void StatusView::checkNode( unsigned int )
{
}

QString StatusView::nameForHost( unsigned int id )
{
  return mHostInfoManager->nameForHost( id );
}

QColor StatusView::hostColor( unsigned int id )
{
  return mHostInfoManager->hostColor( id );
}