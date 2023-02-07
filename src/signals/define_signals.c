/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** define_signals
*/

#include "lib.h"

void define_signals(void)
{
    struct sigaction signal;
    signal.sa_flags = SA_SIGINFO;
    signal.sa_sigaction = &signal_handlers;
    sigaction(SIGINT, &signal, NULL);
    sigaction(SIGUSR1, &signal, NULL);
    sigaction(SIGUSR2, &signal, NULL);
}
