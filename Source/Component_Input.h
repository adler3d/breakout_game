#pragma once
#include <memory>
#include <string>

#include "Device.h"
#include "ecs/aaComponent.h"
#include "Point.h"

namespace game
{
    ///-------------------------------------------------------------------------
    ///-------------------------------------------------------------------------





     ///------------------------------------------------------------------------
    ///
    /// <summary>
    /// Компонент который обрабатывает пользовательский воод
    /// </summary>
    ///
    ///
    ///-------------------------------------------------------------------------
    class AComponentInput
        :
        public ecs::AComponent
    {
        using super = ecs::AComponent;

    public:


        virtual bool mouseDown  (const dm::EventInput &input) = 0;
        virtual void mouseMove  (const dm::EventInput &input) = 0;
        virtual void mouseUp    (const dm::EventInput &input) = 0;

        
        virtual void update     (const float timeSpan) = 0;




    };
    ///-------------------------------------------------------------------------



    ///-------------------------------------------------------------------------
    using PComponentInput = std::shared_ptr< AComponentInput >;
    ///-------------------------------------------------------------------------



}
