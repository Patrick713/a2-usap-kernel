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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x36f6c5e6, "skb_clone" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf68b0045, "skb_push" },
	{ 0x2f780b39, "dev_get_by_index_rcu" },
	{ 0xd2584221, "dev_get_by_index" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x952da7ff, "dev_queue_xmit" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "36F93ECB3AB32936EB42EF4");
