#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include "soundy.h"

template<class T>
class soundy::Singleton
{
 public:
  static T* Instance() {
    if(!m_pInstance) m_pInstance = new T;
    assert(m_pInstance != NULL);
    return m_pInstance;
  }
 protected:
  Singleton();
  ~Singleton();

 private:
  Singleton(Singleton const&);
  Singleton& operator=(Singleton const&);
  static T* m_pInstance;
};

template <class T> T* soundy::Singleton<T>::m_pInstance = NULL;
// typedef soundy::Singleton<soundy::VP::ColorTracker> sColorTracker;

#endif //SINGLETON_HPP


// #ifndef SINGLETON_HPP
// #define SINGLETON_HPP

// template<class T>
// class soundy::Singleton
// {
//  public:
//   static T* Instance() {
//     if(!m_pInstance) m_pInstance = new T;
//     assert(m_pInstance != NULL);
//     return m_pInstance;
//   }
//  protected:
//   Singleton();
//   ~Singleton();

//  private:
//   Singleton(Singleton const&);
//   Singleton& operator=(Singleton const&);
//   static T* m_pInstance;
// };

// template <class T> T* Singleton<T>::m_pInstance = NULL;
// typedef Singleton<ColorTracker> sColorTracker;
// #endif //SINGLETON_HPP
