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
	{ 0xe482a5a0, "param_ops_string" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x64f215d0, "unregister_console" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa71758cb, "netpoll_cleanup" },
	{ 0xdcff3a3e, "register_console" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x85df9b6c, "strsep" },
	{ 0x9e572191, "netpoll_setup" },
	{ 0x32fd42d4, "netpoll_parse_options" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x9d669763, "memcpy" },
	{ 0xdd27fa87, "memchr" },
	{ 0xc9d0e346, "netpoll_send_udp" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0xc5850110, "printk" },
	{ 0x2ac32c62, "__netpoll_cleanup" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "59AB6DED122C4E32C764A4A");
