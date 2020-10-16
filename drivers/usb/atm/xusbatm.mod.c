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
	{ 0x36138fcf, "param_array_ops" },
	{ 0x6a60169e, "usbatm_usb_disconnect" },
	{ 0xe1bf6b5b, "param_ops_ushort" },
	{ 0x4a820490, "param_ops_byte" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x6b60a022, "usb_set_interface" },
	{ 0x5262881b, "usb_driver_claim_interface" },
	{ 0x8d5db181, "usb_altnum_to_altsetting" },
	{ 0xc967f035, "usb_driver_release_interface" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xfa9668fa, "usbatm_usb_probe" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "usbatm");


MODULE_INFO(srcversion, "8874015DD65844BE4130A67");
