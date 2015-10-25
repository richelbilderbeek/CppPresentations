% C++ algorithms 1
% Richel Bilderbeek

# Algorithms

 * Looped operations that have a name
 * Work on containers
 * Work with lambda expressions

# Case: raw for

```
template <class C>
void f(C& v, const C& w) 
{
  const int sz{static_cast<int>(w.size())};
  for (int i=0; i!=sz; ++i) {
    v.push_back(w[i]);
  }
}
```


# Case: algorithm

```
template <class C>
void f(C& v, const C& w) 
{
  std::copy(
    std::begin(w),
    std::end(w),
    std::back_inserter(v)
  );
}
```

# Algorithms build up

 * Algorithms work on ranges, i.e. from a begin to (not including) the end
 * The begin and end are indicated by an iterator
 * 'An algorithm operates on its data through iterators and knows nothing about the container in which the elements are stored' [Stroustrup]

# Ranges

```
std::sort( //C++98
  v.begin(),
  v.end()
);

```
std::sort( //C++11
  std::begin(v),
  std::end(v)
);
```

# Reversed ranges

```
std::sort( //C++98
  v.rbegin(),
  v.rend()
);

```
std::sort( //C++11
  std::rbegin(v),
  std::rend(std::sort)
);
```

# Extensions

 * If range is from begin to end, it is easy to extend these:

```
template <class C>
void sort(C& v) 
{
  std::sort(std::begin(v),std::end(v));
}
```



std::iota(


# Legal stuff

![CC-BY-NC-SA](CC-BY-NC-SA.png "")

Download at:

```
www.github.com/richelbilderbeek/
  CppPresentations/class_design1.pdf
```

![GitHub](GitHub_logo_2013.png "")

Send feedback by adding an issue or doing a pull request.