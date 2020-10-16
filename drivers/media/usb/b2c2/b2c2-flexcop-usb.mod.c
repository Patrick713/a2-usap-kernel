#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x9a152689, "param_ops_int" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x552ef9b9, "flexcop_device_initialize" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5e27f2a6, "flexcop_device_kfree" },
	{ 0x4186a551, "flexcop_sram_ctrl" },
	{ 0x5f754e5a, "memset" },
	{ 0x183c8383, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x6b60a022, "usb_set_interface" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb99c782e, "flexcop_device_kmalloc" },
	{ 0xf412120a, "usb_free_coherent" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x328f8788, "flexcop_sram_set_dest" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcbca55f7, "flexcop_pass_dmx_packets" },
	{ 0x2238b16c, "flexcop_wan_set_speed" },
	{ 0x9d669763, "memcpy" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc28c6b00, "usb_alloc_coherent" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x29335fe9, "flexcop_device_exit" },
	{ 0x9f49ab55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "b2c2-flexcop");

MODULE_ALIAS("usb:v0AF7p0101d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A105277B7B1F1A42FA1D7CC");
