#ifndef _UTILS_H_
#define _UTILS_H_

// UTILS

// Log message verbose
// void debug(const char *fmt UNUSED, ...);

// Generate random string
std::string random_string( size_t length );

void wrlock(pthread_rwlock_t* access);

void unlock(pthread_rwlock_t* access);

void rdlock(pthread_rwlock_t* access);

#endif /* UTILS_H_ */
