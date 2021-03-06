/*
 * This file is a part of OpenNIC Wizard
 * Copywrong (c) 2012-2018 Mike Sharkey
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 1776):
 * <mike@8bitgeek.net> wrote this file.
 * As long as you retain this notice you can do whatever you want with this
 * stuff. If we meet some day, and you think this stuff is worth it,
 * you can buy me a beer in return. ~ Mike Sharkey
 * ----------------------------------------------------------------------------
 */
#ifndef OPENNICSYSTEM_LINUX_H
#define OPENNICSYSTEM_LINUX_H

#include <opennicsystem.h>

class OpenNICSystem_Linux : public OpenNICSystem
{
	public:
        OpenNICSystem();
        virtual ~OpenNICSystem();

        virtual QString getSystemResolverList();
        virtual bool    beginUpdateResolvers(QString& output);
        virtual int     updateResolver(QHostAddress& dns,int index, QString& output);
        virtual bool    endUpdateResolvers(QString& output);
    private:
};

#endif // OPENNICSYSTEM_LINUX_H
