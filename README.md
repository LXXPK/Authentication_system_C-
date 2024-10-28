# User Registration and Login System

This C++ project implements a simple **User Registration and Login System** that allows users to register, log in, and recover their forgotten passwords. It uses file handling to store user credentials securely in a text file.

## Features

- **User Login**: Allows registered users to log in using their username and password.
- **User Registration**: New users can register by creating a unique username and password.
- **Password Recovery**: Users can retrieve their forgotten password by providing their registered username.

## Project Structure

The project consists of the following main functions:

1. **Main Menu**: Displays options for login, registration, password recovery, or exit.
2. **Login**: Authenticates users by matching input credentials with stored records.
3. **Registration**: Allows users to create new accounts, storing their username and password in a file.
4. **Forgot Password**: Helps users retrieve their password if they forget it.

## Technologies Used

- **C++**: Core programming language
- **File Handling**: Used to store and retrieve user credentials in `record.txt`

## Getting Started

### Prerequisites

To run this project, you will need:

- A C++ compiler, such as [GCC](https://gcc.gnu.org/) (available in MinGW for Windows)
- A code editor or IDE, such as [Visual Studio Code](https://code.visualstudio.com/) or [Code::Blocks](http://www.codeblocks.org/)
