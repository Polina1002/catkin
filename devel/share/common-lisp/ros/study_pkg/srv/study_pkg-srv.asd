
(cl:in-package :asdf)

(defsystem "study_pkg-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Poly" :depends-on ("_package_Poly"))
    (:file "_package_Poly" :depends-on ("_package"))
  ))