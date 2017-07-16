# Automatic String Completion Program

By Sasha Morgan
Class: ECE 2574

## Project Description:

A nice feature of user interfaces is the ability to do string completion, effectively guessing what you are typing and giving you the option of just filling it in and saving keystrokes. This is used in many applications. For example most browsers can start guessing the url you are typing. Another is IDEs which can guess what types and names you are typing as you program, i.e. "Intellisense".

Write a program named completer using your iterative binary search as the core algorithm. It should read a list of strings from an ASCII input file and provide a user prompt. The user may type part of a string and hit enter, at which time the program display the string read from the file which is the closest match as determined by the midpoint of the binary search. Another prompt is displayed where the user can accept or reject that match as follows:

Not found: accept CLOSEST_MATCH ? Y/N
where CLOSEST_MATCH is the word found via the search. The user may type y, Y, Yes, YES, or yes to accept and n, N, No, NO, or no to reject.

If the user has typed a string that exists in the file, then no accept/reject option is displayed, the string is just printed. This is a somewhat cumbersome interface, but one that can be implemented in portable standard C++, and could easily be adapted to use in a full user interface. The program should exit if the user types and end-of-file character at any time (C-z on Windows, C-d on Unix/OSX).

The name of the file to read the strings from is taken from the command line. The format is one string per line. Spaces are significant but case is not, that is you should normalize the case when reading the file and before searching.

## Video Walkthrough

Here's a walkthrough of implemented user stories:

<img src='http://i.imgur.com/ePwbWc3.gif' title='Video Walkthrough' width='' alt='Video Walkthrough' />

GIF created with [LiceCap](http://www.cockos.com/licecap/).


Copyright [2017] [Sasha Morgan]

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.




