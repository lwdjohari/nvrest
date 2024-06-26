#pragma once

#include <iterator>
#include <memory>
#include <pqxx/pqxx>

#include "nvserv/global_macro.h"
#include "nvserv/storages/declare.h"

NVREST_BEGIN_NAMESPACE(storages)

class RowResultIterator {
 public:
  virtual RowResultIterator& operator++() {
    return *this;
  };

  virtual bool operator==(const RowResultIterator& other) const {
    return false;
  };

  virtual bool operator!=(const RowResultIterator& other) const {
    return false;
  };

  virtual RowResultPtr operator*() const {
    return nullptr;
  };

 protected:
  RowResultIterator(){};
};

NVREST_END_NAMESPACE
