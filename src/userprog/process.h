#ifndef USERPROG_PROCESS_H
#define USERPROG_PROCESS_H

#include <list.h>
#include "threads/thread.h"

tid_t process_execute (const char *file_name);
int process_wait (tid_t);
void process_exit (int);
void process_activate (void);

/* NIKKI YESALUSKY P2 */
enum p_status
{
  DEAD;
  ALIVE;
);

struct process
{
  int process_id; // tid
  char* program_args;
  enum p_status status;
  struct thread* parent;
  int exit_status;
  struct list_elem p_list_elem;
};
/* NIKKI YESALUSKY P2 */

#endif /* userprog/process.h */
