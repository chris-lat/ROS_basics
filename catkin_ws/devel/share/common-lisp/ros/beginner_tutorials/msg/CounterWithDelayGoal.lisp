; Auto-generated. Do not edit!


(cl:in-package beginner_tutorials-msg)


;//! \htmlinclude CounterWithDelayGoal.msg.html

(cl:defclass <CounterWithDelayGoal> (roslisp-msg-protocol:ros-message)
  ((count_up_to
    :reader count_up_to
    :initarg :count_up_to
    :type cl:integer
    :initform 0))
)

(cl:defclass CounterWithDelayGoal (<CounterWithDelayGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CounterWithDelayGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CounterWithDelayGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name beginner_tutorials-msg:<CounterWithDelayGoal> is deprecated: use beginner_tutorials-msg:CounterWithDelayGoal instead.")))

(cl:ensure-generic-function 'count_up_to-val :lambda-list '(m))
(cl:defmethod count_up_to-val ((m <CounterWithDelayGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader beginner_tutorials-msg:count_up_to-val is deprecated.  Use beginner_tutorials-msg:count_up_to instead.")
  (count_up_to m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CounterWithDelayGoal>) ostream)
  "Serializes a message object of type '<CounterWithDelayGoal>"
  (cl:let* ((signed (cl:slot-value msg 'count_up_to)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CounterWithDelayGoal>) istream)
  "Deserializes a message object of type '<CounterWithDelayGoal>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'count_up_to) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CounterWithDelayGoal>)))
  "Returns string type for a message object of type '<CounterWithDelayGoal>"
  "beginner_tutorials/CounterWithDelayGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CounterWithDelayGoal)))
  "Returns string type for a message object of type 'CounterWithDelayGoal"
  "beginner_tutorials/CounterWithDelayGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CounterWithDelayGoal>)))
  "Returns md5sum for a message object of type '<CounterWithDelayGoal>"
  "ffdf52d27094d6430b622a1a4113662e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CounterWithDelayGoal)))
  "Returns md5sum for a message object of type 'CounterWithDelayGoal"
  "ffdf52d27094d6430b622a1a4113662e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CounterWithDelayGoal>)))
  "Returns full string definition for message of type '<CounterWithDelayGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%int32 count_up_to           #goal(REQUEST)~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CounterWithDelayGoal)))
  "Returns full string definition for message of type 'CounterWithDelayGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%int32 count_up_to           #goal(REQUEST)~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CounterWithDelayGoal>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CounterWithDelayGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'CounterWithDelayGoal
    (cl:cons ':count_up_to (count_up_to msg))
))