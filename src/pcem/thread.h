typedef void thread_t;
thread_t *thread_create(int (*thread_rout)(void *param), void *param);
void thread_kill(thread_t *handle);

typedef void event_t;
event_t *thread_create_event();
void thread_set_event(event_t *event);
void thread_reset_event(event_t *_event);
int thread_wait_event(event_t *event, int timeout);
void thread_destroy_event(event_t *_event);

typedef void mutex_t;
mutex_t *thread_create_mutex(void);
void thread_lock_mutex(mutex_t *mutex);
void thread_unlock_mutex(mutex_t *mutex);
void thread_destroy_mutex(mutex_t *mutex);

void thread_sleep(int t);
