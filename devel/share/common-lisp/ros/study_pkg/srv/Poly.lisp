; Auto-generated. Do not edit!


(cl:in-package study_pkg-srv)


;//! \htmlinclude Poly-request.msg.html

(cl:defclass <Poly-request> (roslisp-msg-protocol:ros-message)
  ((x
    :reader x
    :initarg :x
    :type cl:integer
    :initform 0))
)

(cl:defclass Poly-request (<Poly-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Poly-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Poly-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name study_pkg-srv:<Poly-request> is deprecated: use study_pkg-srv:Poly-request instead.")))

(cl:ensure-generic-function 'x-val :lambda-list '(m))
(cl:defmethod x-val ((m <Poly-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader study_pkg-srv:x-val is deprecated.  Use study_pkg-srv:x instead.")
  (x m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Poly-request>) ostream)
  "Serializes a message object of type '<Poly-request>"
  (cl:let* ((signed (cl:slot-value msg 'x)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 18446744073709551616) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Poly-request>) istream)
  "Deserializes a message object of type '<Poly-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'x) (cl:if (cl:< unsigned 9223372036854775808) unsigned (cl:- unsigned 18446744073709551616))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Poly-request>)))
  "Returns string type for a service object of type '<Poly-request>"
  "study_pkg/PolyRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Poly-request)))
  "Returns string type for a service object of type 'Poly-request"
  "study_pkg/PolyRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Poly-request>)))
  "Returns md5sum for a message object of type '<Poly-request>"
  "7af389a0199f9d711ada5d5e7ae94cb3")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Poly-request)))
  "Returns md5sum for a message object of type 'Poly-request"
  "7af389a0199f9d711ada5d5e7ae94cb3")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Poly-request>)))
  "Returns full string definition for message of type '<Poly-request>"
  (cl:format cl:nil "int64 x~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Poly-request)))
  "Returns full string definition for message of type 'Poly-request"
  (cl:format cl:nil "int64 x~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Poly-request>))
  (cl:+ 0
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Poly-request>))
  "Converts a ROS message object to a list"
  (cl:list 'Poly-request
    (cl:cons ':x (x msg))
))
;//! \htmlinclude Poly-response.msg.html

(cl:defclass <Poly-response> (roslisp-msg-protocol:ros-message)
  ((y
    :reader y
    :initarg :y
    :type cl:integer
    :initform 0))
)

(cl:defclass Poly-response (<Poly-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Poly-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Poly-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name study_pkg-srv:<Poly-response> is deprecated: use study_pkg-srv:Poly-response instead.")))

(cl:ensure-generic-function 'y-val :lambda-list '(m))
(cl:defmethod y-val ((m <Poly-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader study_pkg-srv:y-val is deprecated.  Use study_pkg-srv:y instead.")
  (y m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Poly-response>) ostream)
  "Serializes a message object of type '<Poly-response>"
  (cl:let* ((signed (cl:slot-value msg 'y)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 18446744073709551616) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Poly-response>) istream)
  "Deserializes a message object of type '<Poly-response>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'y) (cl:if (cl:< unsigned 9223372036854775808) unsigned (cl:- unsigned 18446744073709551616))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Poly-response>)))
  "Returns string type for a service object of type '<Poly-response>"
  "study_pkg/PolyResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Poly-response)))
  "Returns string type for a service object of type 'Poly-response"
  "study_pkg/PolyResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Poly-response>)))
  "Returns md5sum for a message object of type '<Poly-response>"
  "7af389a0199f9d711ada5d5e7ae94cb3")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Poly-response)))
  "Returns md5sum for a message object of type 'Poly-response"
  "7af389a0199f9d711ada5d5e7ae94cb3")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Poly-response>)))
  "Returns full string definition for message of type '<Poly-response>"
  (cl:format cl:nil "int64 y~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Poly-response)))
  "Returns full string definition for message of type 'Poly-response"
  (cl:format cl:nil "int64 y~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Poly-response>))
  (cl:+ 0
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Poly-response>))
  "Converts a ROS message object to a list"
  (cl:list 'Poly-response
    (cl:cons ':y (y msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'Poly)))
  'Poly-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'Poly)))
  'Poly-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Poly)))
  "Returns string type for a service object of type '<Poly>"
  "study_pkg/Poly")