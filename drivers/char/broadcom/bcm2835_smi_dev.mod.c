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
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0xa00dc18f, "bcm2835_smi_write_buf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb33bd6cb, "bcm2835_smi_read_buf" },
	{ 0x9ead4bb0, "bcm2835_smi_user_dma" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8b5927a0, "down_timeout" },
	{ 0x13e86e9b, "device_create" },
	{ 0xe6d85203, "__class_create" },
	{ 0x570c6c9a, "cdev_add" },
	{ 0xad534415, "cdev_init" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xe28401e9, "bcm2835_smi_get" },
	{ 0x889e7573, "of_parse_phandle" },
	{ 0xab7a4d1d, "bcm2835_smi_set_regs_from_settings" },
	{ 0x72db83c4, "bcm2835_smi_set_address" },
	{ 0x5f754e5a, "memset" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xf6720336, "bcm2835_smi_get_settings_from_regs" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xa4ab8272, "cdev_del" },
	{ 0x254652b1, "class_destroy" },
	{ 0xda800db5, "device_destroy" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "bcm2835_smi");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smi-dev");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smi-devC*");

MODULE_INFO(srcversion, "A3913E131B87779686E8139");
