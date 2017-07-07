#pragma once
/************************************************************************/
/* Application ID														*/
/************************************************************************/
#define DLLAPP_Gadget	1

/************************************************************************/
/* MessageList'ID														*/
/************************************************************************/
#define STRINGLISTID_Commands	0
#define STRINGLISTID_Prompts	1
#define STRINGLISTID_ERROR		2

/************************************************************************/
/* Command Name ID														*/
/************************************************************************/
#define CMDNAME_ParallelAreaTool	1

/************************************************************************/
/* Prompt	ID															*/
/************************************************************************/
#define PROMPT_FirstPoint	1
#define PROMPT_NextPoint	2
#define PROMPT_AceeptPoint	3

/************************************************************************/
/* Error string ID														*/
/************************************************************************/
#define  ERR_NOTALLOWED		1

/************************************************************************/
/* TEXTRsc	ID															*/
/************************************************************************/
#define TEXTID_OffsetWidth		1

/************************************************************************/
/* CmdItemListRsc enum													*/
/************************************************************************/
enum CmdItemListId
{
	ITEMLIST_PARALLELARE = 1,
};
/************************************************************************/
/* public structures													*/
/************************************************************************/
struct OffSetWidth
{
	double width;
};