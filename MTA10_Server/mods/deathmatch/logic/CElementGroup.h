/*****************************************************************************
*
*  PROJECT:     Multi Theft Auto v1.0
*  LICENSE:     See LICENSE in the top level directory
*  FILE:        mods/deathmatch/logic/CElementGroup.h
*  PURPOSE:     Element group class
*  DEVELOPERS:  Ed Lyons <>
*               Jax <>
*
*  Multi Theft Auto is available from http://www.multitheftauto.com/
*
*****************************************************************************/

class CElementGroup;

#ifndef CELEMENTGROUP_H
#define CELEMENTGROUP_H

#include "CElement.h"

class CElementGroup
{
private:
    CFastList < CElement * >        m_elements;
public:
                                    ~CElementGroup();
    void                            Add ( CElement * element );
    void                            Remove ( CElement * element );
    unsigned int                    GetCount ( void );

    CFastList < CElement* > ::const_iterator IterBegin   ( void )    { return m_elements.begin (); }
    CFastList < CElement* > ::const_iterator IterEnd     ( void )    { return m_elements.end (); }
};

#endif

