# Project

The Minitalk project is a fundamental part of the 42 school curriculum, designed to introduce students to inter-process communication (IPC) and signal handling in Unix-like operating systems using the C programming language. In this project, students are tasked with implementing a simple client-server messaging application using signals.

## Purpose

The primary goal of the Minitalk project is to familiarize students with the concepts of inter-process communication and signal handling, essential skills for developing efficient and robust system-level software. By implementing a client-server architecture based on signals, students gain practical experience in managing signal handlers, exchanging data between processes, and synchronizing communication in a multi-process environment.

## Features

- Implements a client-server messaging system using signals, with one process acting as the server and another process as the client.
- Supports bidirectional communication between the client and server, allowing messages to be sent and received in real-time.
- Provides error handling and robustness features to ensure reliable communication and graceful termination of processes in case of errors or interruptions.
- Offers extensibility through modular design and well-defined protocols, allowing for easy integration of additional features or optimizations.

## Usage

To use the Minitalk application, first compile the client and server programs separately using the provided Makefile:

```bash
make

Then, start the server process by running the ./server executable:

./server

Next, start the client process, specifying the server's process ID (PID) as a command-line argument:

./client <server_pid>

Once both the client and server processes are running, you can start sending messages between them using the client program.
