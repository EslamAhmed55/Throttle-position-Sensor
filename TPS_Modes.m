classdef (Enumeration) TPS_Modes < Simulink.IntEnumType
    enumeration
        Normal(1)
        Downgraded_Sensor1(1)
        Downgraded_Sensor2(2)
        Failure(3)
    end
end