converter
=========

this program formates raw hex data to array C/C++ style. 

For instance: 

you have raw data: ea34bcdf1234567890

you need to get: 0xea, 0x34, 0xbc etc.

just type 
# ./converter ea34bcdf1234567890

get: 

length = 9

{
0xea,0x34,0xbc,0xdf,0x12,0x34,0x56,0x78,0x90,
}
