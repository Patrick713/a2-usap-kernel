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
	{ 0x937c4867, "hci_register_dev" },
	{ 0xfaf119af, "hci_alloc_dev" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xa28c67a, "st_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xee946877, "hci_recv_frame" },
	{ 0xe6c12171, "complete" },
	{ 0xf68b0045, "skb_push" },
	{ 0xcb560b41, "hci_free_dev" },
	{ 0xc68ddd29, "hci_unregister_dev" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x528d71a9, "st_unregister" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "bluetooth,st_drv");


MODULE_INFO(srcversion, "D7F415C343A0B44C969FBA0");
