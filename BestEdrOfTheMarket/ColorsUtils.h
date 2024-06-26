/**
 * @file ColorsUtils.h
 * @brief Utils for printing colored messages in the console using ANSI escape codes
*/

#pragma once

#include <iostream>

#define ANSI_COLOR_BLACK "\033[0;30m"
#define ANSI_COLOR_RED "\033[0;31m"
#define ANSI_COLOR_GREEN "\033[0;32m"
#define ANSI_COLOR_YELLOW "\033[0;33m"
#define ANSI_COLOR_BLUE "\033[0;34m"
#define ANSI_COLOR_MAGENTA "\033[0;35m"
#define ANSI_COLOR_CYAN "\033[0;36m"
#define ANSI_COLOR_WHITE "\033[0;37m"

#define ANSI_COLOR_BG_BLACK "\033[40m"
#define ANSI_COLOR_BG_RED "\033[41m"
#define ANSI_COLOR_BG_GREEN "\033[42m"
#define ANSI_COLOR_BG_YELLOW "\033[43m"
#define ANSI_COLOR_BG_BLUE "\033[44m"
#define ANSI_COLOR_BG_MAGENTA "\033[45m"
#define ANSI_COLOR_BG_CYAN "\033[46m"
#define ANSI_COLOR_BG_WHITE "\033[47m"
#define ANSI_COLOR_BG_VIOLET "\033[48;5;93m"

#define ANSI_COLOR_RESET "\033[0m"

/**
 * Print a message in red color
 * @param msg The message to print
*/

void printRedAlert(std::string msg) {
	std::cout << "\x1B[41m" << "[!] " << msg << "\x1B[0m" << std::endl;
}

/**
 * Print a message in green color
 * @param msg The message to print
*/

void printGreenAlert(std::string msg) {
	std::cout << "\x1B[42m" << "[!] " << msg << "\033[0m" << std::endl;
}

/**
 * Print a message in yellow color
 * @param msg The message to print
*/
void printYellowAlert(std::string msg) {
	std::cout << "\x1B[43m" << "[!] " << msg << "\033[0m" << std::endl;
}

/**
 * Print a message in blue color
 * @param msg The message to print
*/
void printBlueAlert(std::string msg) {
	std::cout << "\x1B[48;5;4m" << "[!] " << msg << "\x1B[0m" << std::endl;
}

/**
 * Print a message in orange color
 * @param msg The message to print
*/
void printOrangeAlert(std::string msg) {
	std::cout << "\x1B[48;5;208m" << "[!] " << msg << "\x1B[0m" << std::endl;
}