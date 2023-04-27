;; Auto-generated. Do not edit!


(when (boundp 'study_pkg::Poly)
  (if (not (find-package "STUDY_PKG"))
    (make-package "STUDY_PKG"))
  (shadow 'Poly (find-package "STUDY_PKG")))
(unless (find-package "STUDY_PKG::POLY")
  (make-package "STUDY_PKG::POLY"))
(unless (find-package "STUDY_PKG::POLYREQUEST")
  (make-package "STUDY_PKG::POLYREQUEST"))
(unless (find-package "STUDY_PKG::POLYRESPONSE")
  (make-package "STUDY_PKG::POLYRESPONSE"))

(in-package "ROS")





(defclass study_pkg::PolyRequest
  :super ros::object
  :slots (_x ))

(defmethod study_pkg::PolyRequest
  (:init
   (&key
    ((:x __x) 0)
    )
   (send-super :init)
   (setq _x (round __x))
   self)
  (:x
   (&optional __x)
   (if __x (setq _x __x)) _x)
  (:serialization-length
   ()
   (+
    ;; int64 _x
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int64 _x
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _x (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _x) (= (length (_x . bv)) 2)) ;; bignum
              (write-long (ash (elt (_x . bv) 0) 0) s)
              (write-long (ash (elt (_x . bv) 1) -1) s))
             ((and (class _x) (= (length (_x . bv)) 1)) ;; big1
              (write-long (elt (_x . bv) 0) s)
              (write-long (if (>= _x 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _x s)(write-long (if (>= _x 0) 0 #xffffffff) s)))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int64 _x
#+(or :alpha :irix6 :x86_64)
      (setf _x (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _x (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;;
   self)
  )

(defclass study_pkg::PolyResponse
  :super ros::object
  :slots (_y ))

(defmethod study_pkg::PolyResponse
  (:init
   (&key
    ((:y __y) 0)
    )
   (send-super :init)
   (setq _y (round __y))
   self)
  (:y
   (&optional __y)
   (if __y (setq _y __y)) _y)
  (:serialization-length
   ()
   (+
    ;; int64 _y
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int64 _y
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _y (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _y) (= (length (_y . bv)) 2)) ;; bignum
              (write-long (ash (elt (_y . bv) 0) 0) s)
              (write-long (ash (elt (_y . bv) 1) -1) s))
             ((and (class _y) (= (length (_y . bv)) 1)) ;; big1
              (write-long (elt (_y . bv) 0) s)
              (write-long (if (>= _y 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _y s)(write-long (if (>= _y 0) 0 #xffffffff) s)))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int64 _y
#+(or :alpha :irix6 :x86_64)
      (setf _y (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _y (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;;
   self)
  )

(defclass study_pkg::Poly
  :super ros::object
  :slots ())

(setf (get study_pkg::Poly :md5sum-) "7af389a0199f9d711ada5d5e7ae94cb3")
(setf (get study_pkg::Poly :datatype-) "study_pkg/Poly")
(setf (get study_pkg::Poly :request) study_pkg::PolyRequest)
(setf (get study_pkg::Poly :response) study_pkg::PolyResponse)

(defmethod study_pkg::PolyRequest
  (:response () (instance study_pkg::PolyResponse :init)))

(setf (get study_pkg::PolyRequest :md5sum-) "7af389a0199f9d711ada5d5e7ae94cb3")
(setf (get study_pkg::PolyRequest :datatype-) "study_pkg/PolyRequest")
(setf (get study_pkg::PolyRequest :definition-)
      "int64 x
---
int64 y

")

(setf (get study_pkg::PolyResponse :md5sum-) "7af389a0199f9d711ada5d5e7ae94cb3")
(setf (get study_pkg::PolyResponse :datatype-) "study_pkg/PolyResponse")
(setf (get study_pkg::PolyResponse :definition-)
      "int64 x
---
int64 y

")



(provide :study_pkg/Poly "7af389a0199f9d711ada5d5e7ae94cb3")


