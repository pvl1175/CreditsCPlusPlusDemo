/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "pch.h"
#include "variant_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace variant {


Variant::~Variant() throw() {
}


void Variant::__set_v_bool(const bool val) {
  this->v_bool = val;
__isset.v_bool = true;
}

void Variant::__set_v_i8(const int8_t val) {
  this->v_i8 = val;
__isset.v_i8 = true;
}

void Variant::__set_v_i16(const int16_t val) {
  this->v_i16 = val;
__isset.v_i16 = true;
}

void Variant::__set_v_i32(const int32_t val) {
  this->v_i32 = val;
__isset.v_i32 = true;
}

void Variant::__set_v_i64(const int64_t val) {
  this->v_i64 = val;
__isset.v_i64 = true;
}

void Variant::__set_v_double(const double val) {
  this->v_double = val;
__isset.v_double = true;
}

void Variant::__set_v_string(const std::string& val) {
  this->v_string = val;
__isset.v_string = true;
}

void Variant::__set_v_list(const std::vector<Variant> & val) {
  this->v_list = val;
__isset.v_list = true;
}

void Variant::__set_v_set(const std::set<Variant> & val) {
  this->v_set = val;
__isset.v_set = true;
}

void Variant::__set_v_map(const std::map<Variant, Variant> & val) {
  this->v_map = val;
__isset.v_map = true;
}
std::ostream& operator<<(std::ostream& out, const Variant& obj)
{
  obj.printTo(out);
  return out;
}


bool Variant::operator<(const Variant &) const
{
	return false;
}

uint32_t Variant::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->v_bool);
          this->__isset.v_bool = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->v_i8);
          this->__isset.v_i8 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->v_i16);
          this->__isset.v_i16 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->v_i32);
          this->__isset.v_i32 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->v_i64);
          this->__isset.v_i64 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->v_double);
          this->__isset.v_double = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->v_string);
          this->__isset.v_string = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->v_list.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _etype3;
            xfer += iprot->readListBegin(_etype3, _size0);
            this->v_list.resize(_size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              xfer += this->v_list[_i4].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.v_list = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_SET) {
          {
            this->v_set.clear();
            uint32_t _size5;
            ::apache::thrift::protocol::TType _etype8;
            xfer += iprot->readSetBegin(_etype8, _size5);
            uint32_t _i9;
            for (_i9 = 0; _i9 < _size5; ++_i9)
            {
              Variant _elem10;
              xfer += _elem10.read(iprot);
              this->v_set.insert(_elem10);
            }
            xfer += iprot->readSetEnd();
          }
          this->__isset.v_set = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->v_map.clear();
            uint32_t _size11;
            ::apache::thrift::protocol::TType _ktype12;
            ::apache::thrift::protocol::TType _vtype13;
            xfer += iprot->readMapBegin(_ktype12, _vtype13, _size11);
            uint32_t _i15;
            for (_i15 = 0; _i15 < _size11; ++_i15)
            {
              Variant _key16;
              xfer += _key16.read(iprot);
              Variant& _val17 = this->v_map[_key16];
              xfer += _val17.read(iprot);
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.v_map = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Variant::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Variant");

  if (this->__isset.v_bool) {
    xfer += oprot->writeFieldBegin("v_bool", ::apache::thrift::protocol::T_BOOL, 1);
    xfer += oprot->writeBool(this->v_bool);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.v_i8) {
    xfer += oprot->writeFieldBegin("v_i8", ::apache::thrift::protocol::T_BYTE, 2);
    xfer += oprot->writeByte(this->v_i8);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.v_i16) {
    xfer += oprot->writeFieldBegin("v_i16", ::apache::thrift::protocol::T_I16, 3);
    xfer += oprot->writeI16(this->v_i16);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.v_i32) {
    xfer += oprot->writeFieldBegin("v_i32", ::apache::thrift::protocol::T_I32, 4);
    xfer += oprot->writeI32(this->v_i32);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.v_i64) {
    xfer += oprot->writeFieldBegin("v_i64", ::apache::thrift::protocol::T_I64, 5);
    xfer += oprot->writeI64(this->v_i64);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.v_double) {
    xfer += oprot->writeFieldBegin("v_double", ::apache::thrift::protocol::T_DOUBLE, 6);
    xfer += oprot->writeDouble(this->v_double);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.v_string) {
    xfer += oprot->writeFieldBegin("v_string", ::apache::thrift::protocol::T_STRING, 7);
    xfer += oprot->writeString(this->v_string);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.v_list) {
    xfer += oprot->writeFieldBegin("v_list", ::apache::thrift::protocol::T_LIST, 8);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->v_list.size()));
      std::vector<Variant> ::const_iterator _iter18;
      for (_iter18 = this->v_list.begin(); _iter18 != this->v_list.end(); ++_iter18)
      {
        xfer += (*_iter18).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.v_set) {
    xfer += oprot->writeFieldBegin("v_set", ::apache::thrift::protocol::T_SET, 9);
    {
      xfer += oprot->writeSetBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->v_set.size()));
      std::set<Variant> ::const_iterator _iter19;
      for (_iter19 = this->v_set.begin(); _iter19 != this->v_set.end(); ++_iter19)
      {
        xfer += (*_iter19).write(oprot);
      }
      xfer += oprot->writeSetEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.v_map) {
    xfer += oprot->writeFieldBegin("v_map", ::apache::thrift::protocol::T_MAP, 10);
    {
      xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRUCT, ::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->v_map.size()));
      std::map<Variant, Variant> ::const_iterator _iter20;
      for (_iter20 = this->v_map.begin(); _iter20 != this->v_map.end(); ++_iter20)
      {
        xfer += _iter20->first.write(oprot);
        xfer += _iter20->second.write(oprot);
      }
      xfer += oprot->writeMapEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Variant &a, Variant &b) {
  using ::std::swap;
  swap(a.v_bool, b.v_bool);
  swap(a.v_i8, b.v_i8);
  swap(a.v_i16, b.v_i16);
  swap(a.v_i32, b.v_i32);
  swap(a.v_i64, b.v_i64);
  swap(a.v_double, b.v_double);
  swap(a.v_string, b.v_string);
  swap(a.v_list, b.v_list);
  swap(a.v_set, b.v_set);
  swap(a.v_map, b.v_map);
  swap(a.__isset, b.__isset);
}

Variant::Variant(const Variant& other21) {
  v_bool = other21.v_bool;
  v_i8 = other21.v_i8;
  v_i16 = other21.v_i16;
  v_i32 = other21.v_i32;
  v_i64 = other21.v_i64;
  v_double = other21.v_double;
  v_string = other21.v_string;
  v_list = other21.v_list;
  v_set = other21.v_set;
  v_map = other21.v_map;
  __isset = other21.__isset;
}
Variant& Variant::operator=(const Variant& other22) {
  v_bool = other22.v_bool;
  v_i8 = other22.v_i8;
  v_i16 = other22.v_i16;
  v_i32 = other22.v_i32;
  v_i64 = other22.v_i64;
  v_double = other22.v_double;
  v_string = other22.v_string;
  v_list = other22.v_list;
  v_set = other22.v_set;
  v_map = other22.v_map;
  __isset = other22.__isset;
  return *this;
}
void Variant::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Variant(";
  out << "v_bool="; (__isset.v_bool ? (out << to_string(v_bool)) : (out << "<null>"));
  out << ", " << "v_i8="; (__isset.v_i8 ? (out << to_string(v_i8)) : (out << "<null>"));
  out << ", " << "v_i16="; (__isset.v_i16 ? (out << to_string(v_i16)) : (out << "<null>"));
  out << ", " << "v_i32="; (__isset.v_i32 ? (out << to_string(v_i32)) : (out << "<null>"));
  out << ", " << "v_i64="; (__isset.v_i64 ? (out << to_string(v_i64)) : (out << "<null>"));
  out << ", " << "v_double="; (__isset.v_double ? (out << to_string(v_double)) : (out << "<null>"));
  out << ", " << "v_string="; (__isset.v_string ? (out << to_string(v_string)) : (out << "<null>"));
  out << ", " << "v_list="; (__isset.v_list ? (out << to_string(v_list)) : (out << "<null>"));
  out << ", " << "v_set="; (__isset.v_set ? (out << to_string(v_set)) : (out << "<null>"));
  out << ", " << "v_map="; (__isset.v_map ? (out << to_string(v_map)) : (out << "<null>"));
  out << ")";
}

} // namespace
