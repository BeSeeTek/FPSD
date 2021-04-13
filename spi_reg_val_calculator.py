# -*- coding: utf-8 -*-
"""
Created on Mon Mar 22 11:26:13 2021

@author: benes
"""


ANeg=[0x00,0x00,0xA0]#1st Bridge backwards
APos=[0x00,0x00,0xC0]#1st Bridge forwards

BNeg=[0x00,0x00,0x14] #2nd Bridge backwards
BPos=[0x00,0x00,0x1C] #2nd Bridge forwards

CNeg=[0x00,0x80,0x02] #3rd Bridge backwards
CPos=[0x00,0x80,0x03] #3rd Bridge forwards

DNeg=[0x00,0x50,0x00] #4th Bridge backwards
DPos=[0x00,0x60,0x00] #4th Bridge forwards

ENeg=[0x00,0x0A,0x00] #5th Bridge backwards
EPos=[0x00,0x0C,0x00] #5th Bridge forwards

FNeg=[0x40,0x01,0x00] #6th Bridge backwards
FPos=[0x80,0x01,0x00] #6th Bridge forwards

Null=[0x00,0x00,0x00]
steps={
'step1' : [APos,Null,CNeg,DNeg,ENeg],
'step2' : [APos,BPos,Null,DNeg,ENeg],
'step3' : [APos,BPos,CPos,Null,ENeg],
'step4' : [APos,BPos,CPos,DPos,Null],
'step5' : [Null,BPos,CPos,DPos,EPos],
'step6' : [ANeg,Null,CPos,DPos,EPos],
'step7' : [ANeg,BNeg,Null,DPos,EPos],
'step8' : [ANeg,BNeg,CNeg,Null,EPos],
'step9' : [ANeg,BNeg,CNeg,DNeg,Null],
'step10': [Null,BNeg,CNeg,DNeg,ENeg],
}

def genControalWord(posses):
    length=len(posses[0])#read how many bytes we have to process
    result=length*[0x00]
    for word in posses:
        for i in range(length):
            result[i]=result[i]|word[i]
    return result

def genControlwordsfromDict(controalworddict):
    result={}
    for key in steps:
        result[key]=genControalWord(controalworddict[key])
        wordashex=[hex(no) for no in result[key]]
        print(str(key)+' '+str(wordashex))
    return result


if __name__ == "__main__":
    worddict=genControlwordsfromDict(steps)
    """
step1 ['0x0', '0xda', '0xc2']
step2 ['0x0', '0x5a', '0xdc']
step3 ['0x0', '0x8a', '0xdf']
step4 ['0x0', '0xe0', '0xdf']
step5 ['0x0', '0xec', '0x1f']
step6 ['0x0', '0xec', '0xa3']
step7 ['0x0', '0x6c', '0xb4']
step8 ['0x0', '0x8c', '0xb6']
step9 ['0x0', '0xd0', '0xb6']
step10 ['0x0', '0xda', '0x16']
    """