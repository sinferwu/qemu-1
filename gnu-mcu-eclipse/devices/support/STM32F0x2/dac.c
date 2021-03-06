/*
 * STM32- DAC(Digital-to-analog converter) emulation.
 *
 * Copyright (c) 2016 Liviu Ionescu.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#include <hw/cortexm/stm32/dac.h>
#include <hw/cortexm/stm32/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void stm32f0x2_dac_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    STM32DACState *state = STM32_DAC_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
state->u.f0.reg.cr= cm_object_get_child_by_name(obj, "CR");
state->u.f0.reg.swtrigr= cm_object_get_child_by_name(obj, "SWTRIGR");
state->u.f0.reg.dhr12r1= cm_object_get_child_by_name(obj, "DHR12R1");
state->u.f0.reg.dhr12l1= cm_object_get_child_by_name(obj, "DHR12L1");
state->u.f0.reg.dhr8r1= cm_object_get_child_by_name(obj, "DHR8R1");
state->u.f0.reg.dor1= cm_object_get_child_by_name(obj, "DOR1");
state->u.f0.reg.sr= cm_object_get_child_by_name(obj, "SR");
// CRbitfields.
state->u.f0.fld.cr.lpds= cm_object_get_child_by_name(state->u.f0.reg.cr, "LPDS"); 
state->u.f0.fld.cr.pdds= cm_object_get_child_by_name(state->u.f0.reg.cr, "PDDS"); 
state->u.f0.fld.cr.cwuf= cm_object_get_child_by_name(state->u.f0.reg.cr, "CWUF"); 
state->u.f0.fld.cr.csbf= cm_object_get_child_by_name(state->u.f0.reg.cr, "CSBF"); 
state->u.f0.fld.cr.pvde= cm_object_get_child_by_name(state->u.f0.reg.cr, "PVDE"); 
state->u.f0.fld.cr.pls= cm_object_get_child_by_name(state->u.f0.reg.cr, "PLS"); 
state->u.f0.fld.cr.dbp= cm_object_get_child_by_name(state->u.f0.reg.cr, "DBP"); 
// SWTRIGRbitfields.
state->u.f0.fld.swtrigr.swtrig1= cm_object_get_child_by_name(state->u.f0.reg.swtrigr, "SWTRIG1"); 
// DHR12R1bitfields.
state->u.f0.fld.dhr12r1.dacc1dhr= cm_object_get_child_by_name(state->u.f0.reg.dhr12r1, "DACC1DHR"); 
// DHR12L1bitfields.
state->u.f0.fld.dhr12l1.dacc1dhr= cm_object_get_child_by_name(state->u.f0.reg.dhr12l1, "DACC1DHR"); 
// DHR8R1bitfields.
state->u.f0.fld.dhr8r1.dacc1dhr= cm_object_get_child_by_name(state->u.f0.reg.dhr8r1, "DACC1DHR"); 
// DOR1bitfields.
state->u.f0.fld.dor1.dacc1dor= cm_object_get_child_by_name(state->u.f0.reg.dor1, "DACC1DOR"); 
// SRbitfields.
state->u.f0.fld.sr.dmaudr1= cm_object_get_child_by_name(state->u.f0.reg.sr, "DMAUDR1"); 
state->u.f0.fld.sr.dmaudr2= cm_object_get_child_by_name(state->u.f0.reg.sr, "DMAUDR2"); 
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t stm32_dac_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    STM32DACState *state = STM32_DAC_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void stm32_dac_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    STM32DACState *state = STM32_DAC_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t stm32_dac_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    STM32DACState *state = STM32_DAC_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void stm32_dac_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    STM32DACState *state = STM32_DAC_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool stm32_dac_is_enabled(Object *obj)
{
    STM32DACState *state = STM32_DAC_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void stm32_dac_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    STM32DACState *state = STM32_DAC_STATE(obj);

    // Capabilities are not yet available.

// TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void stm32_dac_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_STM32_DAC)) {
        return;
    }

    STM32MCUState *mcu = stm32_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    STM32DACState *state = STM32_DAC_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const STM32Capabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "DAC";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[STM32_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case STM32_FAMILY_F0:

        if (capabilities->f0.is_0x2) {

            stm32f0x2_dac_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.f0.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.f0.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->f0.reg.xxx, &stm32_dac_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->f0.reg.xxx, &stm32_dac_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->f0.reg.xxx, &stm32_dac_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->f0.reg.xxx, &stm32_dac_xxx_post_write_callback);

            // TODO: add interrupts.

// TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_STM32_RCC "/AHB1ENR/DACEN");
} else {
            assert(false);
        }

        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void stm32_dac_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_STM32_DAC);
}

static void stm32_dac_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = stm32_dac_reset_callback;
    dc->realize = stm32_dac_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = stm32_dac_is_enabled;
}

static const TypeInfo stm32_dac_type_info = {
    .name = TYPE_STM32_DAC,
    .parent = TYPE_STM32_DAC_PARENT,
    .instance_init = stm32_dac_instance_init_callback,
    .instance_size = sizeof(STM32DACState),
    .class_init = stm32_dac_class_init_callback,
    .class_size = sizeof(STM32DACClass) };

static void stm32_dac_register_types(void)
{
    type_register_static(&stm32_dac_type_info);
}

type_init(stm32_dac_register_types);

// ----------------------------------------------------------------------------
