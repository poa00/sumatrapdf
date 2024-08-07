/* Copyright 2022 the SumatraPDF project authors (see AUTHORS file).
   License: Simplified BSD (see COPYING.BSD) */

namespace uitask {

// Call Initialize() at program startup and Destroy() at the end
void Initialize();
void Destroy();

// call only from the same thread as Initialize() and Destroy()
void DrainQueue();

void Post(Kind kind, const std::function<void()>&);
void Post(Kind kind, const Func0& fn);
// void PostOptimized(const std::function<void()>& f);
} // namespace uitask
